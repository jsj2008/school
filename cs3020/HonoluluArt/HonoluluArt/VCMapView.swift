//
//  VCMapView.swift
//  HonoluluArt
//
//  Created by Nate Armstrong on 11/3/15.
//  Copyright © 2015 Nate Armstrong. All rights reserved.
//

import MapKit

extension ViewController: MKMapViewDelegate {

    // 1
    func mapView(mapView: MKMapView, viewForAnnotation annotation: MKAnnotation) -> MKAnnotationView? {
        if let annotation = annotation as? Artwork {
            let identifier = "pin"
            var view: MKPinAnnotationView
            if let dequeuedView = mapView.dequeueReusableAnnotationViewWithIdentifier(identifier)
                as? MKPinAnnotationView { // 2
                    dequeuedView.annotation = annotation
                    view = dequeuedView
            } else {
                // 3
                view = MKPinAnnotationView(annotation: annotation, reuseIdentifier: identifier)
                view.canShowCallout = true
                view.calloutOffset = CGPoint(x: -5, y: 5)
                view.rightCalloutAccessoryView = UIButton(type: .DetailDisclosure)
            }

            view.pinTintColor = annotation.pinColor()
            return view
        }
        return nil
    }

    func mapView(mapView: MKMapView, annotationView view: MKAnnotationView,
        calloutAccessoryControlTapped control: UIControl) {
            let location = view.annotation as! Artwork
            let launchOptions = [MKLaunchOptionsDirectionsModeKey: MKLaunchOptionsDirectionsModeDriving]
            location.mapItem().openInMapsWithLaunchOptions(launchOptions)
    }
}
